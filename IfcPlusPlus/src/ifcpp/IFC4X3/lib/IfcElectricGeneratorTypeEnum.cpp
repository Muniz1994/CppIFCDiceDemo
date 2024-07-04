/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcElectricGeneratorTypeEnum.h"

// TYPE IfcElectricGeneratorTypeEnum = ENUMERATION OF	(CHP	,ENGINEGENERATOR	,STANDALONE	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcElectricGeneratorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCELECTRICGENERATORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CHP:	stream << ".CHP."; break;
		case ENUM_ENGINEGENERATOR:	stream << ".ENGINEGENERATOR."; break;
		case ENUM_STANDALONE:	stream << ".STANDALONE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcElectricGeneratorTypeEnum> IFC4X3::IfcElectricGeneratorTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcElectricGeneratorTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcElectricGeneratorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcElectricGeneratorTypeEnum>(); }
	shared_ptr<IfcElectricGeneratorTypeEnum> type_object( new IfcElectricGeneratorTypeEnum() );
	if( std_iequal( arg, ".CHP." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_CHP;
	}
	else if( std_iequal( arg, ".ENGINEGENERATOR." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_ENGINEGENERATOR;
	}
	else if( std_iequal( arg, ".STANDALONE." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_STANDALONE;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
