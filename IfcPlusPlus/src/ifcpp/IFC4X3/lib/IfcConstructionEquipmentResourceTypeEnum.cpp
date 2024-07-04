/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcConstructionEquipmentResourceTypeEnum.h"

// TYPE IfcConstructionEquipmentResourceTypeEnum = ENUMERATION OF	(DEMOLISHING	,EARTHMOVING	,ERECTING	,HEATING	,LIGHTING	,PAVING	,PUMPING	,TRANSPORTING	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcConstructionEquipmentResourceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCCONSTRUCTIONEQUIPMENTRESOURCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DEMOLISHING:	stream << ".DEMOLISHING."; break;
		case ENUM_EARTHMOVING:	stream << ".EARTHMOVING."; break;
		case ENUM_ERECTING:	stream << ".ERECTING."; break;
		case ENUM_HEATING:	stream << ".HEATING."; break;
		case ENUM_LIGHTING:	stream << ".LIGHTING."; break;
		case ENUM_PAVING:	stream << ".PAVING."; break;
		case ENUM_PUMPING:	stream << ".PUMPING."; break;
		case ENUM_TRANSPORTING:	stream << ".TRANSPORTING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcConstructionEquipmentResourceTypeEnum> IFC4X3::IfcConstructionEquipmentResourceTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcConstructionEquipmentResourceTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcConstructionEquipmentResourceTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcConstructionEquipmentResourceTypeEnum>(); }
	shared_ptr<IfcConstructionEquipmentResourceTypeEnum> type_object( new IfcConstructionEquipmentResourceTypeEnum() );
	if( std_iequal( arg, ".DEMOLISHING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_DEMOLISHING;
	}
	else if( std_iequal( arg, ".EARTHMOVING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_EARTHMOVING;
	}
	else if( std_iequal( arg, ".ERECTING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_ERECTING;
	}
	else if( std_iequal( arg, ".HEATING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_HEATING;
	}
	else if( std_iequal( arg, ".LIGHTING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_LIGHTING;
	}
	else if( std_iequal( arg, ".PAVING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_PAVING;
	}
	else if( std_iequal( arg, ".PUMPING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_PUMPING;
	}
	else if( std_iequal( arg, ".TRANSPORTING." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_TRANSPORTING;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcConstructionEquipmentResourceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}