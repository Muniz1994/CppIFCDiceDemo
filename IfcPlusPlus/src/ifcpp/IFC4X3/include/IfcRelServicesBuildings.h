/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRelConnects.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcSystem;
	class IFCQUERY_EXPORT IfcSpatialElement;
	//ENTITY
	class IFCQUERY_EXPORT IfcRelServicesBuildings : public IfcRelConnects
	{
	public:
		IfcRelServicesBuildings() = default;
		IfcRelServicesBuildings( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 6; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 366585022; }

		// IfcRoot -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcGloballyUniqueId>				m_GlobalId;
		//  shared_ptr<IfcOwnerHistory>					m_OwnerHistory;				//optional
		//  shared_ptr<IfcLabel>						m_Name;						//optional
		//  shared_ptr<IfcText>							m_Description;				//optional

		// IfcRelationship -----------------------------------------------------------

		// IfcRelConnects -----------------------------------------------------------

		// IfcRelServicesBuildings -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcSystem>						m_RelatingSystem;
		std::vector<shared_ptr<IfcSpatialElement> >	m_RelatedBuildings;
	};
}
