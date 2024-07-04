/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcGlobalOrLocalEnum.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4X3/include/IfcProjectedOrTrueLengthEnum.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelConnectsStructuralActivity.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcRelPositions.h"
#include "ifcpp/IFC4X3/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4X3/include/IfcStructuralLoad.h"
#include "ifcpp/IFC4X3/include/IfcStructuralPlanarAction.h"
#include "ifcpp/IFC4X3/include/IfcStructuralSurfaceActivityTypeEnum.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcStructuralPlanarAction 
IFC4X3::IfcStructuralPlanarAction::IfcStructuralPlanarAction( int tag ) { m_tag = tag; }
void IFC4X3::IfcStructuralPlanarAction::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCSTRUCTURALPLANARACTION" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_AppliedLoad ) { stream << "#" << m_AppliedLoad->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_GlobalOrLocal ) { m_GlobalOrLocal->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_DestabilizingLoad ) { m_DestabilizingLoad->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_ProjectedOrTrue ) { m_ProjectedOrTrue->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream, false, precision ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcStructuralPlanarAction::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcStructuralPlanarAction::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){readEntityReference( args[1], m_OwnerHistory, map, errorStream, entityIdNotFound );}
	if( num_args > 2 ){m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream, entityIdNotFound );}
	if( num_args > 3 ){m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream, entityIdNotFound );}
	if( num_args > 4 ){m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream, entityIdNotFound );}
	if( num_args > 5 ){readEntityReference( args[5], m_ObjectPlacement, map, errorStream, entityIdNotFound );}
	if( num_args > 6 ){readEntityReference( args[6], m_Representation, map, errorStream, entityIdNotFound );}
	if( num_args > 7 ){readEntityReference( args[7], m_AppliedLoad, map, errorStream, entityIdNotFound );}
	if( num_args > 8 ){m_GlobalOrLocal = IfcGlobalOrLocalEnum::createObjectFromSTEP( args[8], map, errorStream, entityIdNotFound );}
	if( num_args > 9 ){m_DestabilizingLoad = IfcBoolean::createObjectFromSTEP( args[9], map, errorStream, entityIdNotFound );}
	if( num_args > 10 ){m_ProjectedOrTrue = IfcProjectedOrTrueLengthEnum::createObjectFromSTEP( args[10], map, errorStream, entityIdNotFound );}
	if( num_args > 11 ){m_PredefinedType = IfcStructuralSurfaceActivityTypeEnum::createObjectFromSTEP( args[11], map, errorStream, entityIdNotFound );}
	if( num_args != 12 ){ errorStream << "Wrong parameter count for entity IfcStructuralPlanarAction, expecting 12, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcStructuralPlanarAction::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcStructuralSurfaceAction::getAttributes( vec_attributes );
}
void IFC4X3::IfcStructuralPlanarAction::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcStructuralSurfaceAction::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcStructuralPlanarAction::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralSurfaceAction::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcStructuralPlanarAction::unlinkFromInverseCounterparts()
{
	IfcStructuralSurfaceAction::unlinkFromInverseCounterparts();
}