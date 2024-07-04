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
	// TYPE IfcCurveInterpolationEnum = ENUMERATION OF	(LINEAR	,LOG_LINEAR	,LOG_LOG	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcCurveInterpolationEnum : virtual public BuildingObject
	{
	public:
		enum IfcCurveInterpolationEnumEnum
		{
			ENUM_LINEAR,
			ENUM_LOG_LINEAR,
			ENUM_LOG_LOG,
			ENUM_NOTDEFINED
		};

		IfcCurveInterpolationEnum() = default;
		IfcCurveInterpolationEnum( IfcCurveInterpolationEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3547450287; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcCurveInterpolationEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcCurveInterpolationEnumEnum m_enum;
	};
}
