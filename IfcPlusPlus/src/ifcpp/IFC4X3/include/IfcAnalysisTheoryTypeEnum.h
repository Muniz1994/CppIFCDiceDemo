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
	// TYPE IfcAnalysisTheoryTypeEnum = ENUMERATION OF	(FIRST_ORDER_THEORY	,FULL_NONLINEAR_THEORY	,SECOND_ORDER_THEORY	,THIRD_ORDER_THEORY	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcAnalysisTheoryTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcAnalysisTheoryTypeEnumEnum
		{
			ENUM_FIRST_ORDER_THEORY,
			ENUM_FULL_NONLINEAR_THEORY,
			ENUM_SECOND_ORDER_THEORY,
			ENUM_THIRD_ORDER_THEORY,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcAnalysisTheoryTypeEnum() = default;
		IfcAnalysisTheoryTypeEnum( IfcAnalysisTheoryTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2506162743; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcAnalysisTheoryTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcAnalysisTheoryTypeEnumEnum m_enum;
	};
}
