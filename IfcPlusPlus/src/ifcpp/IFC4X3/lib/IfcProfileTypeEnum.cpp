/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcProfileTypeEnum.h"

// TYPE IfcProfileTypeEnum = ENUMERATION OF	(AREA	,CURVE);
void IFC4X3::IfcProfileTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCPROFILETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AREA:	stream << ".AREA."; break;
		case ENUM_CURVE:	stream << ".CURVE."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcProfileTypeEnum> IFC4X3::IfcProfileTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcProfileTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcProfileTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcProfileTypeEnum>(); }
	shared_ptr<IfcProfileTypeEnum> type_object( new IfcProfileTypeEnum() );
	if( std_iequal( arg, ".AREA." ) )
	{
		type_object->m_enum = IfcProfileTypeEnum::ENUM_AREA;
	}
	else if( std_iequal( arg, ".CURVE." ) )
	{
		type_object->m_enum = IfcProfileTypeEnum::ENUM_CURVE;
	}
	return type_object;
}