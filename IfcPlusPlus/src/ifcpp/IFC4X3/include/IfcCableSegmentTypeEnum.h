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
	// TYPE IfcCableSegmentTypeEnum = ENUMERATION OF	(BUSBARSEGMENT	,CABLESEGMENT	,CONDUCTORSEGMENT	,CONTACTWIRESEGMENT	,CORESEGMENT	,FIBERSEGMENT	,FIBERTUBE	,OPTICALCABLESEGMENT	,STITCHWIRE	,WIREPAIRSEGMENT	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcCableSegmentTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcCableSegmentTypeEnumEnum
		{
			ENUM_BUSBARSEGMENT,
			ENUM_CABLESEGMENT,
			ENUM_CONDUCTORSEGMENT,
			ENUM_CONTACTWIRESEGMENT,
			ENUM_CORESEGMENT,
			ENUM_FIBERSEGMENT,
			ENUM_FIBERTUBE,
			ENUM_OPTICALCABLESEGMENT,
			ENUM_STITCHWIRE,
			ENUM_WIREPAIRSEGMENT,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcCableSegmentTypeEnum() = default;
		IfcCableSegmentTypeEnum( IfcCableSegmentTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 649472068; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcCableSegmentTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcCableSegmentTypeEnumEnum m_enum;
	};
}
