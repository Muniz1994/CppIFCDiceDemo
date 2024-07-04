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
	// TYPE IfcCompressorTypeEnum = ENUMERATION OF	(BOOSTER	,DYNAMIC	,HERMETIC	,OPENTYPE	,RECIPROCATING	,ROLLINGPISTON	,ROTARY	,ROTARYVANE	,SCROLL	,SEMIHERMETIC	,SINGLESCREW	,SINGLESTAGE	,TROCHOIDAL	,TWINSCREW	,WELDEDSHELLHERMETIC	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcCompressorTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcCompressorTypeEnumEnum
		{
			ENUM_BOOSTER,
			ENUM_DYNAMIC,
			ENUM_HERMETIC,
			ENUM_OPENTYPE,
			ENUM_RECIPROCATING,
			ENUM_ROLLINGPISTON,
			ENUM_ROTARY,
			ENUM_ROTARYVANE,
			ENUM_SCROLL,
			ENUM_SEMIHERMETIC,
			ENUM_SINGLESCREW,
			ENUM_SINGLESTAGE,
			ENUM_TROCHOIDAL,
			ENUM_TWINSCREW,
			ENUM_WELDEDSHELLHERMETIC,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcCompressorTypeEnum() = default;
		IfcCompressorTypeEnum( IfcCompressorTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 798148481; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcCompressorTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcCompressorTypeEnumEnum m_enum;
	};
}
