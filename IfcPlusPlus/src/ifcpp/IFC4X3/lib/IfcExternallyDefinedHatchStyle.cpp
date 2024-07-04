/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcExternallyDefinedHatchStyle.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcURIReference.h"

// ENTITY IfcExternallyDefinedHatchStyle 
IFC4X3::IfcExternallyDefinedHatchStyle::IfcExternallyDefinedHatchStyle( int tag ) { m_tag = tag; }
void IFC4X3::IfcExternallyDefinedHatchStyle::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCEXTERNALLYDEFINEDHATCHSTYLE" << "(";
	if( m_Location ) { m_Location->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcExternallyDefinedHatchStyle::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcExternallyDefinedHatchStyle::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Location = IfcURIReference::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Identification = IfcIdentifier::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcExternallyDefinedHatchStyle, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcExternallyDefinedHatchStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcExternalReference::getAttributes( vec_attributes );
}
void IFC4X3::IfcExternallyDefinedHatchStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcExternalReference::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcExternallyDefinedHatchStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcExternalReference::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcExternallyDefinedHatchStyle::unlinkFromInverseCounterparts()
{
	IfcExternalReference::unlinkFromInverseCounterparts();
}
