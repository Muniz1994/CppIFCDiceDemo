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
	// TYPE IfcWorkScheduleTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcWorkScheduleTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcWorkScheduleTypeEnumEnum
		{
			ENUM_ACTUAL,
			ENUM_BASELINE,
			ENUM_PLANNED,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcWorkScheduleTypeEnum() = default;
		IfcWorkScheduleTypeEnum( IfcWorkScheduleTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3098684301; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcWorkScheduleTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcWorkScheduleTypeEnumEnum m_enum;
	};
}
