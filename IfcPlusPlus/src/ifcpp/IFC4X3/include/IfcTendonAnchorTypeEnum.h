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
	// TYPE IfcTendonAnchorTypeEnum = ENUMERATION OF	(COUPLER	,FIXED_END	,TENSIONING_END	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcTendonAnchorTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcTendonAnchorTypeEnumEnum
		{
			ENUM_COUPLER,
			ENUM_FIXED_END,
			ENUM_TENSIONING_END,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcTendonAnchorTypeEnum() = default;
		IfcTendonAnchorTypeEnum( IfcTendonAnchorTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1479426229; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcTendonAnchorTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcTendonAnchorTypeEnumEnum m_enum;
	};
}