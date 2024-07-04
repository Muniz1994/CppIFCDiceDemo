/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcCurve.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcTrimmedCurve.h"
#include "ifcpp/IFC4X3/include/IfcTrimmingPreference.h"
#include "ifcpp/IFC4X3/include/IfcTrimmingSelect.h"

// ENTITY IfcTrimmedCurve 
IFC4X3::IfcTrimmedCurve::IfcTrimmedCurve( int tag ) { m_tag = tag; }
void IFC4X3::IfcTrimmedCurve::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCTRIMMEDCURVE" << "(";
	if( m_BasisCurve ) { stream << "#" << m_BasisCurve->m_tag; } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Trim1.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcTrimmingSelect>& type_object = m_Trim1[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true, precision );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Trim2.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcTrimmingSelect>& type_object = m_Trim2[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true, precision );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_SenseAgreement ) { m_SenseAgreement->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_MasterRepresentation ) { m_MasterRepresentation->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcTrimmedCurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTrimmedCurve::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_BasisCurve, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readSelectList( args[1], m_Trim1, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readSelectList( args[2], m_Trim2, map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_SenseAgreement = IfcBoolean::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_MasterRepresentation = IfcTrimmingPreference::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args != 5 ){ errorStream << "Wrong parameter count for entity IfcTrimmedCurve, expecting 5, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcTrimmedCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBoundedCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "BasisCurve", m_BasisCurve ) );
	shared_ptr<AttributeObjectVector> Trim1_vec_object( new AttributeObjectVector() );
	std::copy( m_Trim1.begin(), m_Trim1.end(), std::back_inserter( Trim1_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Trim1", Trim1_vec_object ) );
	shared_ptr<AttributeObjectVector> Trim2_vec_object( new AttributeObjectVector() );
	std::copy( m_Trim2.begin(), m_Trim2.end(), std::back_inserter( Trim2_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "Trim2", Trim2_vec_object ) );
	vec_attributes.emplace_back( std::make_pair( "SenseAgreement", m_SenseAgreement ) );
	vec_attributes.emplace_back( std::make_pair( "MasterRepresentation", m_MasterRepresentation ) );
}
void IFC4X3::IfcTrimmedCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBoundedCurve::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcTrimmedCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundedCurve::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcTrimmedCurve::unlinkFromInverseCounterparts()
{
	IfcBoundedCurve::unlinkFromInverseCounterparts();
}
