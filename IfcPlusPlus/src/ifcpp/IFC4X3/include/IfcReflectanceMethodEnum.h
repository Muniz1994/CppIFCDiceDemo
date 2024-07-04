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
	// TYPE IfcReflectanceMethodEnum = ENUMERATION OF	(BLINN	,FLAT	,GLASS	,MATT	,METAL	,MIRROR	,PHONG	,PHYSICAL	,PLASTIC	,STRAUSS	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcReflectanceMethodEnum : virtual public BuildingObject
	{
	public:
		enum IfcReflectanceMethodEnumEnum
		{
			ENUM_BLINN,
			ENUM_FLAT,
			ENUM_GLASS,
			ENUM_MATT,
			ENUM_METAL,
			ENUM_MIRROR,
			ENUM_PHONG,
			ENUM_PHYSICAL,
			ENUM_PLASTIC,
			ENUM_STRAUSS,
			ENUM_NOTDEFINED
		};

		IfcReflectanceMethodEnum() = default;
		IfcReflectanceMethodEnum( IfcReflectanceMethodEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1011845978; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcReflectanceMethodEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcReflectanceMethodEnumEnum m_enum;
	};
}