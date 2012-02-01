#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescribed_elementType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescribed_elementType



namespace cutting_tool_schema_arm
{

class CDescribed_elementType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDescribed_elementType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDescribed_elementType(CDescribed_elementType const& init);
	void operator=(CDescribed_elementType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDescribed_elementType); }
	MemberElement<CItem_definition, _altova_mi_altova_CDescribed_elementType_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
	MemberElement<CCoupling, _altova_mi_altova_CDescribed_elementType_altova_Coupling> Coupling;
	struct Coupling { typedef Iterator<CCoupling> iterator; };
	MemberElement<CWorkpiece_feature, _altova_mi_altova_CDescribed_elementType_altova_Workpiece_feature> Workpiece_feature;
	struct Workpiece_feature { typedef Iterator<CWorkpiece_feature> iterator; };
	MemberElement<CMaterial_designation, _altova_mi_altova_CDescribed_elementType_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
	MemberElement<CCutting_data_association, _altova_mi_altova_CDescribed_elementType_altova_Cutting_data_association> Cutting_data_association;
	struct Cutting_data_association { typedef Iterator<CCutting_data_association> iterator; };
	MemberElement<CGrade, _altova_mi_altova_CDescribed_elementType_altova_Grade> Grade;
	struct Grade { typedef Iterator<CGrade> iterator; };
	MemberElement<CDocument_file, _altova_mi_altova_CDescribed_elementType_altova_Document_file> Document_file;
	struct Document_file { typedef Iterator<CDocument_file> iterator; };
	MemberElement<CDocument_representation, _altova_mi_altova_CDescribed_elementType_altova_Document_representation> Document_representation;
	struct Document_representation { typedef Iterator<CDocument_representation> iterator; };
	MemberElement<CItem_structure_association, _altova_mi_altova_CDescribed_elementType_altova_Item_structure_association> Item_structure_association;
	struct Item_structure_association { typedef Iterator<CItem_structure_association> iterator; };
	MemberElement<CItem_instance, _altova_mi_altova_CDescribed_elementType_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<CMated_item_relationship, _altova_mi_altova_CDescribed_elementType_altova_Mated_item_relationship> Mated_item_relationship;
	struct Mated_item_relationship { typedef Iterator<CMated_item_relationship> iterator; };
	MemberElement<CPhysical_item_structure_association, _altova_mi_altova_CDescribed_elementType_altova_Physical_item_structure_association> Physical_item_structure_association;
	struct Physical_item_structure_association { typedef Iterator<CPhysical_item_structure_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescribed_elementType
