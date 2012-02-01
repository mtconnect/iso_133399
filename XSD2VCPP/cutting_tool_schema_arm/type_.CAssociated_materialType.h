#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_materialType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_materialType



namespace cutting_tool_schema_arm
{

class CAssociated_materialType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_materialType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_materialType(CAssociated_materialType const& init);
	void operator=(CAssociated_materialType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_materialType); }
	MemberElement<CMaterial_designation, _altova_mi_altova_CAssociated_materialType_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_materialType
