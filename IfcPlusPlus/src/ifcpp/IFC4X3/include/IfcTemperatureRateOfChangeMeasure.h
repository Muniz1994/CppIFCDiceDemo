/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDerivedMeasureValue.h"

namespace IFC4X3
{
	// TYPE IfcTemperatureRateOfChangeMeasure = REAL;
	class IFCQUERY_EXPORT IfcTemperatureRateOfChangeMeasure : public IfcDerivedMeasureValue
	{
	public:
		IfcTemperatureRateOfChangeMeasure() = default;
		IfcTemperatureRateOfChangeMeasure( double value );
		virtual uint32_t classID() const { return 1209108979; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcTemperatureRateOfChangeMeasure> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		double m_value;
	};
}