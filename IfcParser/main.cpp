#include <memory>
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/reader/ReaderSTEP.h>
#include <ifcpp/IFC4X3/include/IfcProject.h>
#include <ifcpp/IFC4X3/include/IfcElement.h>
#include <ifcpp/IFC4X3/include/IfcLabel.h>
#include <vector>
#include <chrono>


int main()


{
    // Initialize a new building model
    shared_ptr<BuildingModel> building_model(new BuildingModel());


    // Initialize the STEP reader
    shared_ptr<ReaderSTEP> step_reader(new ReaderSTEP());


    // Load step file and populate the building model
    step_reader->loadModelFromFile("Arch.ifc", building_model);


    // Get all entities from the model
    std::unordered_map<int, std::shared_ptr<BuildingEntity>> ifc_entities = building_model->getMapIfcEntities();


    std::vector<shared_ptr<IFC4X3::IfcElement>> elements;


    // Iterate through all entities
    for (auto i : ifc_entities)


    {
        shared_ptr<BuildingEntity> entity = i.second;


        // Check if the entity is a element
        shared_ptr<IFC4X3::IfcElement> element = dynamic_pointer_cast<IFC4X3::IfcElement>(entity);


        if (element)
        {
            elements.push_back(element);
        }
    }


    // Print number of IfcElements
    std::cout << "Num of elements: " << elements.size() << std::endl;


    return 0;
}
