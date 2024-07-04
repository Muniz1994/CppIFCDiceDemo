/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcSolidAngleMeasure.h"

// TYPE IfcSolidAngleMeasure = REAL;
IFC4X3::IfcSolidAngleMeasure::IfcSolidAngleMeasure( double value ) { m_value = value; }
void IFC4X3::IfcSolidAngleMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCSOLIDANGLEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcSolidAngleMeasure> IFC4X3::IfcSolidAngleMeasure::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcSolidAngleMeasure>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcSolidAngleMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcSolidAngleMeasure>(); }
	shared_ptr<IfcSolidAngleMeasure> type_object( new IfcSolidAngleMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}