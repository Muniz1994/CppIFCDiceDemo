/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcObjectPlacement.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcVirtualGridIntersection;
	class IFCQUERY_EXPORT IfcGridPlacementDirectionSelect;
	//ENTITY
	class IFCQUERY_EXPORT IfcGridPlacement : public IfcObjectPlacement
	{
	public:
		IfcGridPlacement() = default;
		IfcGridPlacement( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 3; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 178086475; }

		// IfcObjectPlacement -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcObjectPlacement>				m_PlacementRelTo;			//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcProduct> >			m_PlacesObject_inverse;
		//  std::vector<weak_ptr<IfcObjectPlacement> >	m_ReferencedByPlacements_inverse;

		// IfcGridPlacement -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcVirtualGridIntersection>		m_PlacementLocation;
		shared_ptr<IfcGridPlacementDirectionSelect>	m_PlacementRefDirection;	//optional
	};
}
