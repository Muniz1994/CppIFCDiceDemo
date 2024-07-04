/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSimpleValue.h"

namespace IFC4X3
{
	// TYPE IfcURIReference = STRING;
	class IFCQUERY_EXPORT IfcURIReference : public IfcSimpleValue
	{
	public:
		IfcURIReference() = default;
		IfcURIReference( std::string value );
		virtual uint32_t classID() const { return 950732822; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcURIReference> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		std::string m_value;
	};
}
