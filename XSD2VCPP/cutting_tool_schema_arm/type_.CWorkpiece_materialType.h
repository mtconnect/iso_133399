#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CWorkpiece_materialType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CWorkpiece_materialType



namespace cutting_tool_schema_arm
{

class CWorkpiece_materialType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CWorkpiece_materialType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CWorkpiece_materialType(CWorkpiece_materialType const& init);
	void operator=(CWorkpiece_materialType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CWorkpiece_materialType); }
	MemberElement<CMaterial_designation, _altova_mi_altova_CWorkpiece_materialType_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CWorkpiece_materialType
