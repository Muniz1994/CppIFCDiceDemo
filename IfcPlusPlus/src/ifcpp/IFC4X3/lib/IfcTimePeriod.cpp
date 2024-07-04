/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcTime.h"
#include "ifcpp/IFC4X3/include/IfcTimePeriod.h"

// ENTITY IfcTimePeriod 
IFC4X3::IfcTimePeriod::IfcTimePeriod( int tag ) { m_tag = tag; }
void IFC4X3::IfcTimePeriod::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCTIMEPERIOD" << "(";
	if( m_StartTime ) { m_StartTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTime ) { m_EndTime->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcTimePeriod::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcTimePeriod::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_StartTime = IfcTime::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_EndTime = IfcTime::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcTimePeriod, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcTimePeriod::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	vec_attributes.emplace_back( std::make_pair( "StartTime", m_StartTime ) );
	vec_attributes.emplace_back( std::make_pair( "EndTime", m_EndTime ) );
}
void IFC4X3::IfcTimePeriod::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IFC4X3::IfcTimePeriod::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IFC4X3::IfcTimePeriod::unlinkFromInverseCounterparts()
{
}
