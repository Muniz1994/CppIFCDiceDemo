/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcProduct.h"

// ENTITY IfcObjectPlacement 
IFC4X3::IfcObjectPlacement::IfcObjectPlacement( int tag ) { m_tag = tag; }
void IFC4X3::IfcObjectPlacement::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCOBJECTPLACEMENT" << "(";
	if( m_PlacementRelTo ) { stream << "#" << m_PlacementRelTo->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcObjectPlacement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcObjectPlacement::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_PlacementRelTo, map, errorStream, entityIdNotFound );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcObjectPlacement, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcObjectPlacement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "PlacementRelTo", m_PlacementRelTo ) );
}
void IFC4X3::IfcObjectPlacement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	shared_ptr<AttributeObjectVector> PlacesObject_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_PlacesObject_inverse.size(); ++i )
	{
		if( !m_PlacesObject_inverse[i].expired() )
		{
			PlacesObject_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcProduct>( m_PlacesObject_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "PlacesObject_inverse", PlacesObject_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> ReferencedByPlacements_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_ReferencedByPlacements_inverse.size(); ++i )
	{
		if( !m_ReferencedByPlacements_inverse[i].expired() )
		{
			ReferencedByPlacements_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcObjectPlacement>( m_ReferencedByPlacements_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "ReferencedByPlacements_inverse", ReferencedByPlacements_inverse_vec_obj ) );
}
void IFC4X3::IfcObjectPlacement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	shared_ptr<IfcObjectPlacement> ptr_self = dynamic_pointer_cast<IfcObjectPlacement>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcObjectPlacement::setInverseCounterparts: type mismatch" ); }
	if( m_PlacementRelTo )
	{
		m_PlacementRelTo->m_ReferencedByPlacements_inverse.emplace_back( ptr_self );
	}
}
void IFC4X3::IfcObjectPlacement::unlinkFromInverseCounterparts()
{
	if( m_PlacementRelTo )
	{
		std::vector<weak_ptr<IfcObjectPlacement> >& ReferencedByPlacements_inverse = m_PlacementRelTo->m_ReferencedByPlacements_inverse;
		for( auto it_ReferencedByPlacements_inverse = ReferencedByPlacements_inverse.begin(); it_ReferencedByPlacements_inverse != ReferencedByPlacements_inverse.end(); )
		{
			weak_ptr<IfcObjectPlacement> self_candidate_weak = *it_ReferencedByPlacements_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ReferencedByPlacements_inverse;
				continue;
			}
			shared_ptr<IfcObjectPlacement> self_candidate( *it_ReferencedByPlacements_inverse );
			if( self_candidate.get() == this )
			{
				it_ReferencedByPlacements_inverse= ReferencedByPlacements_inverse.erase( it_ReferencedByPlacements_inverse );
			}
			else
			{
				++it_ReferencedByPlacements_inverse;
			}
		}
	}
}