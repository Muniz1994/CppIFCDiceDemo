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
	// TYPE IfcDocumentStatusEnum = ENUMERATION OF	(DRAFT	,FINAL	,FINALDRAFT	,REVISION	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcDocumentStatusEnum : virtual public BuildingObject
	{
	public:
		enum IfcDocumentStatusEnumEnum
		{
			ENUM_DRAFT,
			ENUM_FINAL,
			ENUM_FINALDRAFT,
			ENUM_REVISION,
			ENUM_NOTDEFINED
		};

		IfcDocumentStatusEnum() = default;
		IfcDocumentStatusEnum( IfcDocumentStatusEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 4068098364; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcDocumentStatusEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcDocumentStatusEnumEnum m_enum;
	};
}
