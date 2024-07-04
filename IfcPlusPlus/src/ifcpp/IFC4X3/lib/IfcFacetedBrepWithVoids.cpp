/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcClosedShell.h"
#include "ifcpp/IFC4X3/include/IfcFacetedBrepWithVoids.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcFacetedBrepWithVoids 
IFC4X3::IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids( int tag ) { m_tag = tag; }
void IFC4X3::IfcFacetedBrepWithVoids::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCFACETEDBREPWITHVOIDS" << "(";
	if( m_Outer ) { stream << "#" << m_Outer->m_tag; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Voids );
	stream << ");";
}
void IFC4X3::IfcFacetedBrepWithVoids::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcFacetedBrepWithVoids::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_Outer, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReferenceList( args[1], m_Voids, map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcFacetedBrepWithVoids, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcFacetedBrepWithVoids::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcFacetedBrep::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Voids_vec_object( new AttributeObjectVector() );
	std::copy( m_Voids.begin(), m_Voids.end(), std::back_inserter( Voids_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Voids", Voids_vec_object ) );
}
void IFC4X3::IfcFacetedBrepWithVoids::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcFacetedBrep::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcFacetedBrepWithVoids::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcFacetedBrep::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcFacetedBrepWithVoids::unlinkFromInverseCounterparts()
{
	IfcFacetedBrep::unlinkFromInverseCounterparts();
}