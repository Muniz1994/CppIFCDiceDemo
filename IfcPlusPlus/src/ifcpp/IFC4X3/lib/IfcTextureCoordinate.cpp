/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceTexture.h"
#include "ifcpp/IFC4X3/include/IfcTextureCoordinate.h"

// ENTITY IfcTextureCoordinate 
IFC4X3::IfcTextureCoordinate::IfcTextureCoordinate( int tag ) { m_tag = tag; }
void IFC4X3::IfcTextureCoordinate::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCTEXTURECOORDINATE" << "(";
	writeEntityList( stream, m_Maps );
	stream << ");";
}
void IFC4X3::IfcTextureCoordinate::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTextureCoordinate::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReferenceList( args[0], m_Maps, map, errorStream, entityIdNotFound );}
	if( num_args != 1 ){ errorStream << "Wrong parameter count for entity IfcTextureCoordinate, expecting 1, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcTextureCoordinate::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPresentationItem::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> Maps_vec_object( new AttributeObjectVector() );
	std::copy( m_Maps.begin(), m_Maps.end(), std::back_inserter( Maps_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Maps", Maps_vec_object ) );
}
void IFC4X3::IfcTextureCoordinate::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTextureCoordinate::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcTextureCoordinate> ptr_self = dynamic_pointer_cast<IfcTextureCoordinate>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcTextureCoordinate::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_Maps.size(); ++i )
	{
		if( m_Maps[i] )
		{
			m_Maps[i]->m_IsMappedBy_inverse.emplace_back( ptr_self );
		}
	}
}
void IFC4X3::IfcTextureCoordinate::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_Maps.size(); ++i )
	{
		if( m_Maps[i] )
		{
			std::vector<weak_ptr<IfcTextureCoordinate> >& IsMappedBy_inverse = m_Maps[i]->m_IsMappedBy_inverse;
			for( auto it_IsMappedBy_inverse = IsMappedBy_inverse.begin(); it_IsMappedBy_inverse != IsMappedBy_inverse.end(); )
			{
				weak_ptr<IfcTextureCoordinate> self_candidate_weak = *it_IsMappedBy_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsMappedBy_inverse;
					continue;
				}
				shared_ptr<IfcTextureCoordinate> self_candidate( *it_IsMappedBy_inverse );
				if( self_candidate.get() == this )
				{
					it_IsMappedBy_inverse= IsMappedBy_inverse.erase( it_IsMappedBy_inverse );
				}
				else
				{
					++it_IsMappedBy_inverse;
				}
			}
		}
	}
}