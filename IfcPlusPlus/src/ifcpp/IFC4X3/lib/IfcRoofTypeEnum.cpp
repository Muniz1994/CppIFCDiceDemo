/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcRoofTypeEnum.h"

// TYPE IfcRoofTypeEnum = ENUMERATION OF	(BARREL_ROOF	,BUTTERFLY_ROOF	,DOME_ROOF	,FLAT_ROOF	,FREEFORM	,GABLE_ROOF	,GAMBREL_ROOF	,HIPPED_GABLE_ROOF	,HIP_ROOF	,MANSARD_ROOF	,PAVILION_ROOF	,RAINBOW_ROOF	,SHED_ROOF	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcRoofTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCROOFTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BARREL_ROOF:	stream << ".BARREL_ROOF."; break;
		case ENUM_BUTTERFLY_ROOF:	stream << ".BUTTERFLY_ROOF."; break;
		case ENUM_DOME_ROOF:	stream << ".DOME_ROOF."; break;
		case ENUM_FLAT_ROOF:	stream << ".FLAT_ROOF."; break;
		case ENUM_FREEFORM:	stream << ".FREEFORM."; break;
		case ENUM_GABLE_ROOF:	stream << ".GABLE_ROOF."; break;
		case ENUM_GAMBREL_ROOF:	stream << ".GAMBREL_ROOF."; break;
		case ENUM_HIPPED_GABLE_ROOF:	stream << ".HIPPED_GABLE_ROOF."; break;
		case ENUM_HIP_ROOF:	stream << ".HIP_ROOF."; break;
		case ENUM_MANSARD_ROOF:	stream << ".MANSARD_ROOF."; break;
		case ENUM_PAVILION_ROOF:	stream << ".PAVILION_ROOF."; break;
		case ENUM_RAINBOW_ROOF:	stream << ".RAINBOW_ROOF."; break;
		case ENUM_SHED_ROOF:	stream << ".SHED_ROOF."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcRoofTypeEnum> IFC4X3::IfcRoofTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcRoofTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcRoofTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcRoofTypeEnum>(); }
	shared_ptr<IfcRoofTypeEnum> type_object( new IfcRoofTypeEnum() );
	if( std_iequal( arg, ".BARREL_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_BARREL_ROOF;
	}
	else if( std_iequal( arg, ".BUTTERFLY_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_BUTTERFLY_ROOF;
	}
	else if( std_iequal( arg, ".DOME_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_DOME_ROOF;
	}
	else if( std_iequal( arg, ".FLAT_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_FLAT_ROOF;
	}
	else if( std_iequal( arg, ".FREEFORM." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_FREEFORM;
	}
	else if( std_iequal( arg, ".GABLE_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_GABLE_ROOF;
	}
	else if( std_iequal( arg, ".GAMBREL_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_GAMBREL_ROOF;
	}
	else if( std_iequal( arg, ".HIPPED_GABLE_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_HIPPED_GABLE_ROOF;
	}
	else if( std_iequal( arg, ".HIP_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_HIP_ROOF;
	}
	else if( std_iequal( arg, ".MANSARD_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_MANSARD_ROOF;
	}
	else if( std_iequal( arg, ".PAVILION_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_PAVILION_ROOF;
	}
	else if( std_iequal( arg, ".RAINBOW_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_RAINBOW_ROOF;
	}
	else if( std_iequal( arg, ".SHED_ROOF." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_SHED_ROOF;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRoofTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
