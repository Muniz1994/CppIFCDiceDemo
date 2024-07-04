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
	// TYPE IfcSpatialZoneTypeEnum = ENUMERATION OF	(CONSTRUCTION	,FIRESAFETY	,INTERFERENCE	,LIGHTING	,OCCUPANCY	,RESERVATION	,SECURITY	,THERMAL	,TRANSPORT	,VENTILATION	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSpatialZoneTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSpatialZoneTypeEnumEnum
		{
			ENUM_CONSTRUCTION,
			ENUM_FIRESAFETY,
			ENUM_INTERFERENCE,
			ENUM_LIGHTING,
			ENUM_OCCUPANCY,
			ENUM_RESERVATION,
			ENUM_SECURITY,
			ENUM_THERMAL,
			ENUM_TRANSPORT,
			ENUM_VENTILATION,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSpatialZoneTypeEnum() = default;
		IfcSpatialZoneTypeEnum( IfcSpatialZoneTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3647622174; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcSpatialZoneTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcSpatialZoneTypeEnumEnum m_enum;
	};
}
