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
	// TYPE IfcSpaceTypeEnum = ENUMERATION OF	(BERTH	,EXTERNAL	,GFA	,INTERNAL	,PARKING	,SPACE	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSpaceTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSpaceTypeEnumEnum
		{
			ENUM_BERTH,
			ENUM_EXTERNAL,
			ENUM_GFA,
			ENUM_INTERNAL,
			ENUM_PARKING,
			ENUM_SPACE,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSpaceTypeEnum() = default;
		IfcSpaceTypeEnum( IfcSpaceTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1455546828; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcSpaceTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcSpaceTypeEnumEnum m_enum;
	};
}
