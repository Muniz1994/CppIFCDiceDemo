/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCoordinateOperation.h"
#include "ifcpp/IFC4X3/include/IfcCoordinateReferenceSystem.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcWellKnownText.h"

// ENTITY IfcCoordinateReferenceSystem 
IFC4X3::IfcCoordinateReferenceSystem::IfcCoordinateReferenceSystem( int tag ) { m_tag = tag; }
void IFC4X3::IfcCoordinateReferenceSystem::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCCOORDINATEREFERENCESYSTEM" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_GeodeticDatum ) { m_GeodeticDatum->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCoordinateReferenceSystem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCoordinateReferenceSystem::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_GeodeticDatum = IfcIdentifier::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcCoordinateReferenceSystem, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcCoordinateReferenceSystem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.emplace_back( std::make_pair( "GeodeticDatum", m_GeodeticDatum ) );
}
void IFC4X3::IfcCoordinateReferenceSystem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	shared_ptr<AttributeObjectVector> HasCoordinateOperation_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasCoordinateOperation_inverse.size(); ++i )
	{
		if( !m_HasCoordinateOperation_inverse[i].expired() )
		{
			HasCoordinateOperation_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcCoordinateOperation>( m_HasCoordinateOperation_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasCoordinateOperation_inverse", HasCoordinateOperation_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> WellKnownText_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_WellKnownText_inverse.size(); ++i )
	{
		if( !m_WellKnownText_inverse[i].expired() )
		{
			WellKnownText_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcWellKnownText>( m_WellKnownText_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "WellKnownText_inverse", WellKnownText_inverse_vec_obj ) );
}
void IFC4X3::IfcCoordinateReferenceSystem::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcCoordinateReferenceSystem::unlinkFromInverseCounterparts()
{
}