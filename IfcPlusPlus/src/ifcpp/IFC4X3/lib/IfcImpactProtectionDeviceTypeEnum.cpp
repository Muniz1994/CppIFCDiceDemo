/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcImpactProtectionDeviceTypeEnum.h"

// TYPE IfcImpactProtectionDeviceTypeEnum = ENUMERATION OF	(BUMPER	,CRASHCUSHION	,DAMPINGSYSTEM	,FENDER	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcImpactProtectionDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCIMPACTPROTECTIONDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BUMPER:	stream << ".BUMPER."; break;
		case ENUM_CRASHCUSHION:	stream << ".CRASHCUSHION."; break;
		case ENUM_DAMPINGSYSTEM:	stream << ".DAMPINGSYSTEM."; break;
		case ENUM_FENDER:	stream << ".FENDER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcImpactProtectionDeviceTypeEnum> IFC4X3::IfcImpactProtectionDeviceTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcImpactProtectionDeviceTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcImpactProtectionDeviceTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcImpactProtectionDeviceTypeEnum>(); }
	shared_ptr<IfcImpactProtectionDeviceTypeEnum> type_object( new IfcImpactProtectionDeviceTypeEnum() );
	if( std_iequal( arg, ".BUMPER." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_BUMPER;
	}
	else if( std_iequal( arg, ".CRASHCUSHION." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_CRASHCUSHION;
	}
	else if( std_iequal( arg, ".DAMPINGSYSTEM." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_DAMPINGSYSTEM;
	}
	else if( std_iequal( arg, ".FENDER." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_FENDER;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
