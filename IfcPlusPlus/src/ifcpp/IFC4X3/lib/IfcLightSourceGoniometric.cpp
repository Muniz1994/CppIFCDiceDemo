/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4X3/include/IfcColourRgb.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLightDistributionDataSourceSelect.h"
#include "ifcpp/IFC4X3/include/IfcLightEmissionSourceEnum.h"
#include "ifcpp/IFC4X3/include/IfcLightSourceGoniometric.h"
#include "ifcpp/IFC4X3/include/IfcLuminousFluxMeasure.h"
#include "ifcpp/IFC4X3/include/IfcNormalisedRatioMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"
#include "ifcpp/IFC4X3/include/IfcThermodynamicTemperatureMeasure.h"

// ENTITY IfcLightSourceGoniometric 
IFC4X3::IfcLightSourceGoniometric::IfcLightSourceGoniometric( int tag ) { m_tag = tag; }
void IFC4X3::IfcLightSourceGoniometric::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCLIGHTSOURCEGONIOMETRIC" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_LightColour ) { stream << "#" << m_LightColour->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_AmbientIntensity ) { m_AmbientIntensity->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Intensity ) { m_Intensity->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_ColourAppearance ) { stream << "#" << m_ColourAppearance->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_ColourTemperature ) { m_ColourTemperature->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_LuminousFlux ) { m_LuminousFlux->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_LightEmissionSource ) { m_LightEmissionSource->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_LightDistributionDataSource ) { m_LightDistributionDataSource->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcLightSourceGoniometric::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcLightSourceGoniometric::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_Name = IfcLabel::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_LightColour, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_AmbientIntensity = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Intensity = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){readEntityReference( args[4], m_Position, map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){readEntityReference( args[5], m_ColourAppearance, map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){m_ColourTemperature = IfcThermodynamicTemperatureMeasure::createObjectFromSTEP( args[6], map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){m_LuminousFlux = IfcLuminousFluxMeasure::createObjectFromSTEP( args[7], map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){m_LightEmissionSource = IfcLightEmissionSourceEnum::createObjectFromSTEP( args[8], map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){m_LightDistributionDataSource = IfcLightDistributionDataSourceSelect::createObjectFromSTEP( args[9], map, errorStream, entityIdNotFound );}
	if( num_args != 10 ){ errorStream << "Wrong parameter count for entity IfcLightSourceGoniometric, expecting 10, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcLightSourceGoniometric::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcLightSource::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Position", m_Position ) );
	vec_attributes.emplace_back( std::make_pair( "ColourAppearance", m_ColourAppearance ) );
	vec_attributes.emplace_back( std::make_pair( "ColourTemperature", m_ColourTemperature ) );
	vec_attributes.emplace_back( std::make_pair( "LuminousFlux", m_LuminousFlux ) );
	vec_attributes.emplace_back( std::make_pair( "LightEmissionSource", m_LightEmissionSource ) );
	vec_attributes.emplace_back( std::make_pair( "LightDistributionDataSource", m_LightDistributionDataSource ) );
}
void IFC4X3::IfcLightSourceGoniometric::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcLightSource::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcLightSourceGoniometric::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcLightSource::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcLightSourceGoniometric::unlinkFromInverseCounterparts()
{
	IfcLightSource::unlinkFromInverseCounterparts();
}