/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcLibrarySelect.h"
#include "IfcExternalInformation.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcActorSelect;
	class IFCQUERY_EXPORT IfcDateTime;
	class IFCQUERY_EXPORT IfcURIReference;
	class IFCQUERY_EXPORT IfcText;
	class IFCQUERY_EXPORT IfcRelAssociatesLibrary;
	class IFCQUERY_EXPORT IfcLibraryReference;
	//ENTITY
	class IFCQUERY_EXPORT IfcLibraryInformation : virtual public IfcLibrarySelect, public IfcExternalInformation
	{
	public:
		IfcLibraryInformation() = default;
		IfcLibraryInformation( int id );
		virtual void getStepLine( std::stringstream& stream, size_t precision ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 6; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 2655187982; }

		// IfcExternalInformation -----------------------------------------------------------

		// IfcLibraryInformation -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcLabel>							m_Name;
		shared_ptr<IfcLabel>							m_Version;					//optional
		shared_ptr<IfcActorSelect>						m_Publisher;				//optional
		shared_ptr<IfcDateTime>							m_VersionDate;				//optional
		shared_ptr<IfcURIReference>						m_Location;					//optional
		shared_ptr<IfcText>								m_Description;				//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcRelAssociatesLibrary> >	m_LibraryInfoForObjects_inverse;
		std::vector<weak_ptr<IfcLibraryReference> >		m_HasLibraryReferences_inverse;
	};
}
