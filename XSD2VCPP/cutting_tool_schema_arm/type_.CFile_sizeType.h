#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFile_sizeType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFile_sizeType



namespace cutting_tool_schema_arm
{

class CFile_sizeType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CFile_sizeType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CFile_sizeType(CFile_sizeType const& init);
	void operator=(CFile_sizeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CFile_sizeType); }
	MemberElement<CValue_with_unit, _altova_mi_altova_CFile_sizeType_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFile_sizeType
