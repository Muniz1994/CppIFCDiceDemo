/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcBoundaryNodeCondition.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcWarpingStiffnessSelect;
	//ENTITY
	class IFCQUERY_EXPORT IfcBoundaryNodeConditionWarping : public IfcBoundaryNodeCondition
	{
	public:
		IfcBoundaryNodeConditionWarping() = default;
		IfcBoundaryNodeConditionWarping( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 8; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2069777674; }

		// IfcBoundaryCondition -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>						m_Name;						//optional

		// IfcBoundaryNodeCondition -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcTranslationalStiffnessSelect>	m_TranslationalStiffnessX;	//optional
		//  shared_ptr<IfcTranslationalStiffnessSelect>	m_TranslationalStiffnessY;	//optional
		//  shared_ptr<IfcTranslationalStiffnessSelect>	m_TranslationalStiffnessZ;	//optional
		//  shared_ptr<IfcRotationalStiffnessSelect>	m_RotationalStiffnessX;		//optional
		//  shared_ptr<IfcRotationalStiffnessSelect>	m_RotationalStiffnessY;		//optional
		//  shared_ptr<IfcRotationalStiffnessSelect>	m_RotationalStiffnessZ;		//optional

		// IfcBoundaryNodeConditionWarping -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcWarpingStiffnessSelect>		m_WarpingStiffness;			//optional
	};
}