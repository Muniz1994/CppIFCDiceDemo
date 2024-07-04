/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcAmountOfSubstanceMeasure.h"

// TYPE IfcAmountOfSubstanceMeasure = REAL;
IFC4X3::IfcAmountOfSubstanceMeasure::IfcAmountOfSubstanceMeasure( double value ) { m_value = value; }
void IFC4X3::IfcAmountOfSubstanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCAMOUNTOFSUBSTANCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value, precision );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcAmountOfSubstanceMeasure> IFC4X3::IfcAmountOfSubstanceMeasure::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcAmountOfSubstanceMeasure>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcAmountOfSubstanceMeasure>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcAmountOfSubstanceMeasure>(); }
	shared_ptr<IfcAmountOfSubstanceMeasure> type_object( new IfcAmountOfSubstanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}