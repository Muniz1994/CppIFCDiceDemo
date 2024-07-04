/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcRepresentationContext.h"

// ENTITY IfcRepresentationContext 
IFC4X3::IfcRepresentationContext::IfcRepresentationContext( int tag ) { m_tag = tag; }
void IFC4X3::IfcRepresentationContext::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCREPRESENTATIONCONTEXT" << "(";
	if( m_ContextIdentifier ) { m_ContextIdentifier->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ContextType ) { m_ContextType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcRepresentationContext::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcRepresentationContext::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_ContextIdentifier = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_ContextType = IfcLabel::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcRepresentationContext, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcRepresentationContext::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "ContextIdentifier", m_ContextIdentifier ) );
	vec_attributes.emplace_back( std::make_pair( "ContextType", m_ContextType ) );
}
void IFC4X3::IfcRepresentationContext::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	shared_ptr<AttributeObjectVector> RepresentationsInContext_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_RepresentationsInContext_inverse.size(); ++i )
	{
		if( !m_RepresentationsInContext_inverse[i].expired() )
		{
			RepresentationsInContext_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRepresentation>( m_RepresentationsInContext_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "RepresentationsInContext_inverse", RepresentationsInContext_inverse_vec_obj ) );
}
void IFC4X3::IfcRepresentationContext::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcRepresentationContext::unlinkFromInverseCounterparts()
{
}
