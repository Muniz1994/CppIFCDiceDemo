/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcStateEnum.h"

// TYPE IfcStateEnum = ENUMERATION OF	(LOCKED	,READONLY	,READONLYLOCKED	,READWRITE	,READWRITELOCKED);
void IFC4X3::IfcStateEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCSTATEENUM("; }
	switch( m_enum )
	{
		case ENUM_LOCKED:	stream << ".LOCKED."; break;
		case ENUM_READONLY:	stream << ".READONLY."; break;
		case ENUM_READONLYLOCKED:	stream << ".READONLYLOCKED."; break;
		case ENUM_READWRITE:	stream << ".READWRITE."; break;
		case ENUM_READWRITELOCKED:	stream << ".READWRITELOCKED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcStateEnum> IFC4X3::IfcStateEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcStateEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcStateEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcStateEnum>(); }
	shared_ptr<IfcStateEnum> type_object( new IfcStateEnum() );
	if( std_iequal( arg, ".LOCKED." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_LOCKED;
	}
	else if( std_iequal( arg, ".READONLY." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READONLY;
	}
	else if( std_iequal( arg, ".READONLYLOCKED." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READONLYLOCKED;
	}
	else if( std_iequal( arg, ".READWRITE." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READWRITE;
	}
	else if( std_iequal( arg, ".READWRITELOCKED." ) )
	{
		type_object->m_enum = IfcStateEnum::ENUM_READWRITELOCKED;
	}
	return type_object;
}