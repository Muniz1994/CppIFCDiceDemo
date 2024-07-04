/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcPerformanceHistoryTypeEnum.h"

// TYPE IfcPerformanceHistoryTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcPerformanceHistoryTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCPERFORMANCEHISTORYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcPerformanceHistoryTypeEnum> IFC4X3::IfcPerformanceHistoryTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcPerformanceHistoryTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcPerformanceHistoryTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcPerformanceHistoryTypeEnum>(); }
	shared_ptr<IfcPerformanceHistoryTypeEnum> type_object( new IfcPerformanceHistoryTypeEnum() );
	if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPerformanceHistoryTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPerformanceHistoryTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}