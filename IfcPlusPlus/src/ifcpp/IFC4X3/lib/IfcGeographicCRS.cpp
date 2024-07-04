/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCoordinateOperation.h"
#include "ifcpp/IFC4X3/include/IfcGeographicCRS.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcNamedUnit.h"
#include "ifcpp/IFC4X3/include/IfcText.h"
#include "ifcpp/IFC4X3/include/IfcWellKnownText.h"

// ENTITY IfcGeographicCRS 
IFC4X3::IfcGeographicCRS::IfcGeographicCRS( int tag ) { m_tag = tag; }
void IFC4X3::IfcGeographicCRS::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCGEOGRAPHICCRS" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_GeodeticDatum ) { m_GeodeticDatum->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PrimeMeridian ) { m_PrimeMeridian->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_AngleUnit ) { stream << "#" << m_AngleUnit->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_HeightUnit ) { stream << "#" << m_HeightUnit->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcGeographicCRS::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcGeographicCRS::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_Description = IfcText::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_GeodeticDatum = IfcIdentifier::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_PrimeMeridian = IfcIdentifier::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){readEntityReference( args[4], m_AngleUnit, map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){readEntityReference( args[5], m_HeightUnit, map, errorStream, entityIdNotFound );}
	if( num_args != 6 ){ errorStream << "Wrong parameter count for entity IfcGeographicCRS, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcGeographicCRS::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcCoordinateReferenceSystem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PrimeMeridian", m_PrimeMeridian ) );
	vec_attributes.emplace_back( std::make_pair( "AngleUnit", m_AngleUnit ) );
	vec_attributes.emplace_back( std::make_pair( "HeightUnit", m_HeightUnit ) );
}
void IFC4X3::IfcGeographicCRS::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcCoordinateReferenceSystem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcGeographicCRS::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCoordinateReferenceSystem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcGeographicCRS::unlinkFromInverseCounterparts()
{
	IfcCoordinateReferenceSystem::unlinkFromInverseCounterparts();
}