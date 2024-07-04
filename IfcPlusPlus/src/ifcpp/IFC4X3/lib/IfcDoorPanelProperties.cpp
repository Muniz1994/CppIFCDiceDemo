/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcDoorPanelOperationEnum.h"
#include "ifcpp/IFC4X3/include/IfcDoorPanelPositionEnum.h"
#include "ifcpp/IFC4X3/include/IfcDoorPanelProperties.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4X3/include/IfcShapeAspect.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcTypeObject.h"

// ENTITY IfcDoorPanelProperties 
IFC4X3::IfcDoorPanelProperties::IfcDoorPanelProperties( int tag ) { m_tag = tag; }
void IFC4X3::IfcDoorPanelProperties::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCDOORPANELPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelDepth ) { m_PanelDepth->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelOperation ) { m_PanelOperation->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelWidth ) { m_PanelWidth->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PanelPosition ) { m_PanelPosition->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ShapeAspectStyle ) { stream << "#" << m_ShapeAspectStyle->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcDoorPanelProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcDoorPanelProperties::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_PanelDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){m_PanelOperation = IfcDoorPanelOperationEnum::createObjectFromSTEP( args[5], map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_PanelWidth = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_PanelPosition = IfcDoorPanelPositionEnum::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){readEntityReference( args[8], m_ShapeAspectStyle, map, errorStream, entityIdNotFound );}
	if( num_args != 9 ){ errorStream << "Wrong parameter count for entity IfcDoorPanelProperties, expecting 9, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcDoorPanelProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPreDefinedPropertySet::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PanelDepth", m_PanelDepth ) );
	vec_attributes.emplace_back( std::make_pair( "PanelOperation", m_PanelOperation ) );
	vec_attributes.emplace_back( std::make_pair( "PanelWidth", m_PanelWidth ) );
	vec_attributes.emplace_back( std::make_pair( "PanelPosition", m_PanelPosition ) );
	vec_attributes.emplace_back( std::make_pair( "ShapeAspectStyle", m_ShapeAspectStyle ) );
}
void IFC4X3::IfcDoorPanelProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPreDefinedPropertySet::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcDoorPanelProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedPropertySet::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcDoorPanelProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedPropertySet::unlinkFromInverseCounterparts();
}
