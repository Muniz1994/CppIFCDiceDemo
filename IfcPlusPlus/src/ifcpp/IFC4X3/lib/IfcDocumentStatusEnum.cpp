/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDocumentStatusEnum.h"

// TYPE IfcDocumentStatusEnum = ENUMERATION OF	(DRAFT	,FINAL	,FINALDRAFT	,REVISION	,NOTDEFINED);
void IFC4X3::IfcDocumentStatusEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDOCUMENTSTATUSENUM("; }
	switch( m_enum )
	{
		case ENUM_DRAFT:	stream << ".DRAFT."; break;
		case ENUM_FINAL:	stream << ".FINAL."; break;
		case ENUM_FINALDRAFT:	stream << ".FINALDRAFT."; break;
		case ENUM_REVISION:	stream << ".REVISION."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDocumentStatusEnum> IFC4X3::IfcDocumentStatusEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcDocumentStatusEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDocumentStatusEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDocumentStatusEnum>(); }
	shared_ptr<IfcDocumentStatusEnum> type_object( new IfcDocumentStatusEnum() );
	if( std_iequal( arg, ".DRAFT." ) )
	{
		type_object->m_enum = IfcDocumentStatusEnum::ENUM_DRAFT;
	}
	else if( std_iequal( arg, ".FINAL." ) )
	{
		type_object->m_enum = IfcDocumentStatusEnum::ENUM_FINAL;
	}
	else if( std_iequal( arg, ".FINALDRAFT." ) )
	{
		type_object->m_enum = IfcDocumentStatusEnum::ENUM_FINALDRAFT;
	}
	else if( std_iequal( arg, ".REVISION." ) )
	{
		type_object->m_enum = IfcDocumentStatusEnum::ENUM_REVISION;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDocumentStatusEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}