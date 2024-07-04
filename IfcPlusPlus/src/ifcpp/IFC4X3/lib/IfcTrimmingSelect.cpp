/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcParameterValue.h"
#include "ifcpp/IFC4X3/include/IfcTrimmingSelect.h"

// TYPE IfcTrimmingSelect = SELECT	(IfcCartesianPoint	,IfcParameterValue);
shared_ptr<IFC4X3::IfcTrimmingSelect> IFC4X3::IfcTrimmingSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcTrimmingSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcTrimmingSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcTrimmingSelect>();
	}
	shared_ptr<IfcTrimmingSelect> result_object;
	readSelectType( arg, result_object, map, errorStream, entityIdNotFound );
	return result_object;
}