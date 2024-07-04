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
	// TYPE IfcDiscreteAccessoryTypeEnum = ENUMERATION OF	(ANCHORPLATE	,BIRDPROTECTION	,BRACKET	,CABLEARRANGER	,ELASTIC_CUSHION	,EXPANSION_JOINT_DEVICE	,FILLER	,FLASHING	,INSULATOR	,LOCK	,PANEL_STRENGTHENING	,POINTMACHINEMOUNTINGDEVICE	,POINT_MACHINE_LOCKING_DEVICE	,RAILBRACE	,RAILPAD	,RAIL_LUBRICATION	,RAIL_MECHANICAL_EQUIPMENT	,SHOE	,SLIDINGCHAIR	,SOUNDABSORPTION	,TENSIONINGEQUIPMENT	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcDiscreteAccessoryTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcDiscreteAccessoryTypeEnumEnum
		{
			ENUM_ANCHORPLATE,
			ENUM_BIRDPROTECTION,
			ENUM_BRACKET,
			ENUM_CABLEARRANGER,
			ENUM_ELASTIC_CUSHION,
			ENUM_EXPANSION_JOINT_DEVICE,
			ENUM_FILLER,
			ENUM_FLASHING,
			ENUM_INSULATOR,
			ENUM_LOCK,
			ENUM_PANEL_STRENGTHENING,
			ENUM_POINTMACHINEMOUNTINGDEVICE,
			ENUM_POINT_MACHINE_LOCKING_DEVICE,
			ENUM_RAILBRACE,
			ENUM_RAILPAD,
			ENUM_RAIL_LUBRICATION,
			ENUM_RAIL_MECHANICAL_EQUIPMENT,
			ENUM_SHOE,
			ENUM_SLIDINGCHAIR,
			ENUM_SOUNDABSORPTION,
			ENUM_TENSIONINGEQUIPMENT,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcDiscreteAccessoryTypeEnum() = default;
		IfcDiscreteAccessoryTypeEnum( IfcDiscreteAccessoryTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 697765865; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcDiscreteAccessoryTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcDiscreteAccessoryTypeEnumEnum m_enum;
	};
}
