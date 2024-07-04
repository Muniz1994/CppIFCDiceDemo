/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcMonthInYearNumber = INTEGER;
	class IFCQUERY_EXPORT IfcMonthInYearNumber : public BuildingObject
	{
	public:
		IfcMonthInYearNumber() = default;
		IfcMonthInYearNumber( int value );
		virtual uint32_t classID() const { return 765770214; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcMonthInYearNumber> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		int m_value;
	};
}
