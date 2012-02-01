#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_physical_itemType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_physical_itemType



namespace cutting_tool_schema_arm
{

class CAssociated_physical_itemType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_physical_itemType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_physical_itemType(CAssociated_physical_itemType const& init);
	void operator=(CAssociated_physical_itemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_physical_itemType); }
	MemberElement<CPhysical_item_definition, _altova_mi_altova_CAssociated_physical_itemType_altova_Physical_item_definition> Physical_item_definition;
	struct Physical_item_definition { typedef Iterator<CPhysical_item_definition> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_physical_itemType
