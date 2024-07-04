/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcCableFittingTypeEnum.h"

// TYPE IfcCableFittingTypeEnum = ENUMERATION OF	(CONNECTOR	,ENTRY	,EXIT	,FANOUT	,JUNCTION	,TRANSITION	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcCableFittingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCCABLEFITTINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONNECTOR:	stream << ".CONNECTOR."; break;
		case ENUM_ENTRY:	stream << ".ENTRY."; break;
		case ENUM_EXIT:	stream << ".EXIT."; break;
		case ENUM_FANOUT:	stream << ".FANOUT."; break;
		case ENUM_JUNCTION:	stream << ".JUNCTION."; break;
		case ENUM_TRANSITION:	stream << ".TRANSITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcCableFittingTypeEnum> IFC4X3::IfcCableFittingTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcCableFittingTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcCableFittingTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcCableFittingTypeEnum>(); }
	shared_ptr<IfcCableFittingTypeEnum> type_object( new IfcCableFittingTypeEnum() );
	if( std_iequal( arg, ".CONNECTOR." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_CONNECTOR;
	}
	else if( std_iequal( arg, ".ENTRY." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_ENTRY;
	}
	else if( std_iequal( arg, ".EXIT." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_EXIT;
	}
	else if( std_iequal( arg, ".FANOUT." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_FANOUT;
	}
	else if( std_iequal( arg, ".JUNCTION." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_JUNCTION;
	}
	else if( std_iequal( arg, ".TRANSITION." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_TRANSITION;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCableFittingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}