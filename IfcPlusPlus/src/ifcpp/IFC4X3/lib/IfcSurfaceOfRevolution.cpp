/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis1Placement.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcProfileDef.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceOfRevolution.h"

// ENTITY IfcSurfaceOfRevolution 
IFC4X3::IfcSurfaceOfRevolution::IfcSurfaceOfRevolution( int tag ) { m_tag = tag; }
void IFC4X3::IfcSurfaceOfRevolution::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSURFACEOFREVOLUTION" << "(";
	if( m_SweptCurve ) { stream << "#" << m_SweptCurve->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_AxisPosition ) { stream << "#" << m_AxisPosition->m_tag; } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcSurfaceOfRevolution::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcSurfaceOfRevolution::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){readEntityReference( args[0], m_SweptCurve, map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_Position, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){readEntityReference( args[2], m_AxisPosition, map, errorStream, entityIdNotFound );}
	if( num_args != 3 ){ errorStream << "Wrong parameter count for entity IfcSurfaceOfRevolution, expecting 3, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcSurfaceOfRevolution::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcSweptSurface::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "AxisPosition", m_AxisPosition ) );
}
void IFC4X3::IfcSurfaceOfRevolution::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcSweptSurface::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcSurfaceOfRevolution::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSweptSurface::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcSurfaceOfRevolution::unlinkFromInverseCounterparts()
{
	IfcSweptSurface::unlinkFromInverseCounterparts();
}