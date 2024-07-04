/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcStructuralLoadTemperature.h"
#include "ifcpp/IFC4X3/include/IfcThermodynamicTemperatureMeasure.h"

// ENTITY IfcStructuralLoadTemperature 
IFC4X3::IfcStructuralLoadTemperature::IfcStructuralLoadTemperature( int tag ) { m_tag = tag; }
void IFC4X3::IfcStructuralLoadTemperature::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSTRUCTURALLOADTEMPERATURE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DeltaTConstant ) { m_DeltaTConstant->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DeltaTY ) { m_DeltaTY->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DeltaTZ ) { m_DeltaTZ->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcStructuralLoadTemperature::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcStructuralLoadTemperature::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_DeltaTConstant = IfcThermodynamicTemperatureMeasure::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_DeltaTY = IfcThermodynamicTemperatureMeasure::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_DeltaTZ = IfcThermodynamicTemperatureMeasure::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args != 4 ){ errorStream << "Wrong parameter count for entity IfcStructuralLoadTemperature, expecting 4, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcStructuralLoadTemperature::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcStructuralLoadStatic::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "DeltaTConstant", m_DeltaTConstant ) );
	vec_attributes.emplace_back( std::make_pair( "DeltaTY", m_DeltaTY ) );
	vec_attributes.emplace_back( std::make_pair( "DeltaTZ", m_DeltaTZ ) );
}
void IFC4X3::IfcStructuralLoadTemperature::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcStructuralLoadStatic::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcStructuralLoadTemperature::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralLoadStatic::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcStructuralLoadTemperature::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadStatic::unlinkFromInverseCounterparts();
}