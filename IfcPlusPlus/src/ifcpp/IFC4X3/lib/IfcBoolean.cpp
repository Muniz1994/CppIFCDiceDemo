/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfRotationalSubgradeReactionSelect.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfSubgradeReactionSelect.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfTranslationalSubgradeReactionSelect.h"
#include "ifcpp/IFC4X3/include/IfcRotationalStiffnessSelect.h"
#include "ifcpp/IFC4X3/include/IfcSimpleValue.h"
#include "ifcpp/IFC4X3/include/IfcTranslationalStiffnessSelect.h"
#include "ifcpp/IFC4X3/include/IfcWarpingStiffnessSelect.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"

// TYPE IfcBoolean = BOOLEAN;
IFC4X3::IfcBoolean::IfcBoolean( bool value ) { m_value = value; }
void IFC4X3::IfcBoolean::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCBOOLEAN("; }
	if( m_value == false )
	{
		stream << ".F.";
	}
	else if( m_value == true )
	{
		stream << ".T.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcBoolean> IFC4X3::IfcBoolean::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcBoolean>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcBoolean>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcBoolean>(); }
	shared_ptr<IfcBoolean> type_object( new IfcBoolean() );
	readBool( arg, type_object->m_value );
	return type_object;
}