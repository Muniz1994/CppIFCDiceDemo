/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcReinforcingMeshTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcReinforcingMeshTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcReinforcingMeshTypeEnumEnum
		{
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcReinforcingMeshTypeEnum() = default;
		IfcReinforcingMeshTypeEnum( IfcReinforcingMeshTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1385270127; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcReinforcingMeshTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcReinforcingMeshTypeEnumEnum m_enum;
	};
}