/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcSectionProperties.h"
#include "ifcpp/IFC4X3/include/IfcSectionTypeEnum.h"

// ENTITY IfcSectionProperties 
IFC4X3::IfcSectionProperties::IfcSectionProperties( int tag ) { m_tag = tag; }
void IFC4X3::IfcSectionProperties::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSECTIONPROPERTIES" << "(";
	if( m_SectionType ) { m_SectionType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_StartProfile ) { stream << "#" << m_StartProfile->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_EndProfile ) { stream << "#" << m_EndProfile->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcSectionProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSectionProperties::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_SectionType = IfcSectionTypeEnum::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_StartProfile, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReference( args[2], m_EndProfile, map, errorStream, entityIdNotFound );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcSectionProperties, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSectionProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPreDefinedProperties::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "SectionType", m_SectionType ) );
	vec_attributes.emplace_back( std::make_pair( "StartProfile", m_StartProfile ) );
	vec_attributes.emplace_back( std::make_pair( "EndProfile", m_EndProfile ) );
}
void IFC4X3::IfcSectionProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPreDefinedProperties::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSectionProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPreDefinedProperties::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSectionProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedProperties::unlinkFromInverseCounterparts();
}