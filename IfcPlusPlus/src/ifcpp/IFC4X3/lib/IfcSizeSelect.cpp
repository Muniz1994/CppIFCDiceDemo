/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcDescriptiveMeasure.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcSizeSelect.h"

// TYPE IfcSizeSelect = SELECT	(IfcDescriptiveMeasure	,IfcLengthMeasure	,IfcNormalisedRatioMeasure	,IfcPositiveLengthMeasure	,IfcPositiveRatioMeasure	,IfcRatioMeasure);
shared_ptr<IFC4X3::IfcSizeSelect> IFC4X3::IfcSizeSelect::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.empty() ){ return shared_ptr<IfcSizeSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcSizeSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcSizeSelect>();
	}
	shared_ptr<IfcSizeSelect> result_object;
	readSelectType( arg, result_object, map, errorStream, entityIdNotFound );
	return result_object;
}
