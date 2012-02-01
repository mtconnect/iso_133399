#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_materialType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_materialType



namespace cutting_tool_schema_arm
{

class CMating_materialType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CMating_materialType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CMating_materialType(CMating_materialType const& init);
	void operator=(CMating_materialType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMating_materialType); }
	MemberElement<CItem_instance, _altova_mi_altova_CMating_materialType_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<CQuantified_instance, _altova_mi_altova_CMating_materialType_altova_Quantified_instance> Quantified_instance;
	struct Quantified_instance { typedef Iterator<CQuantified_instance> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_materialType
